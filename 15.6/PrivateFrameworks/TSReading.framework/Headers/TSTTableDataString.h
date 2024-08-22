// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEDATASTRING_H
#define TSTTABLEDATASTRING_H

@class NSString;


#import "TSTTableDataObject.h"

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithString:(id)arg0 ;
-(void)dealloc;


@end


#endif