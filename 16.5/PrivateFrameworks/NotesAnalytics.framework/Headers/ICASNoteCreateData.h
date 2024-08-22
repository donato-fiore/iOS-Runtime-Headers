// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTECREATEDATA_H
#define ICASNOTECREATEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASNoteCreateApproach.h"

@interface ICASNoteCreateData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASNoteCreateApproach *noteCreateApproach; // ivar: _noteCreateApproach


+(id)dataName;
-(id)initWithNoteCreateApproach:(id)arg0 ;
-(id)toDict;


@end


#endif