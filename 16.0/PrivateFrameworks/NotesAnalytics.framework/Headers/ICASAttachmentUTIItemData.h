// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASATTACHMENTUTIITEMDATA_H
#define ICASATTACHMENTUTIITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAttachmentUTIItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfAttachments; // ivar: _countOfAttachments
@property (readonly, nonatomic) NSString *uti; // ivar: _uti


+(id)dataName;
-(id)initWithUti:(id)arg0 countOfAttachments:(id)arg1 ;
-(id)toDict;


@end


#endif