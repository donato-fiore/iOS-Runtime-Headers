// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICORECONTACTPHOTOVALUEFILTER_H
#define CNUICORECONTACTPHOTOVALUEFILTER_H

@class NSString;
@protocol CNUICoreContactPropertyValueFilter;

#import <Foundation/Foundation.h>


@interface CNUICoreContactPhotoValueFilter : NSObject <CNUICoreContactPropertyValueFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contactByFilteringOutPropertyValueOfContact:(id)arg0 ;
-(void)filterPropertyValuesFromContact:(id)arg0 ;


@end


#endif