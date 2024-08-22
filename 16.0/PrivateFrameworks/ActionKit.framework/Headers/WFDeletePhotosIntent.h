// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDELETEPHOTOSINTENT_H
#define WFDELETEPHOTOSINTENT_H

@class INIntent, NSArray;



@interface WFDeletePhotosIntent : INIntent

@property (copy, nonatomic) NSArray *assetIdentifiers;
@property (copy, nonatomic) NSArray *photos;




@end


#endif