// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYATTRIBUTESETACTIVITYINFO_H
#define SYATTRIBUTESETACTIVITYINFO_H

@class NSString, CSSearchableItemAttributeSet, NSURL;
@protocol SYUserActivityInfo;

#import <Foundation/Foundation.h>


@interface SYAttributeSetActivityInfo : NSObject <SYUserActivityInfo>



@property (readonly, copy) NSString *activityType;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet; // ivar: _attributeSet
@property (readonly, copy) NSURL *canonicalURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *targetContentIdentifier;
@property (readonly, copy) NSURL *webpageURL;


-(id)initWithAttributeSet:(id)arg0 ;


@end


#endif