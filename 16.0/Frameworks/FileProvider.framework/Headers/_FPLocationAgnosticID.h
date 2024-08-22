// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FPLOCATIONAGNOSTICID_H
#define _FPLOCATIONAGNOSTICID_H


#import <Foundation/Foundation.h>

#import "FPItemID.h"

@interface _FPLocationAgnosticID : NSObject {
    FPItemID *_itemID;
    FPItemID *_alternateID;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItemID:(id)arg0 ;


@end


#endif