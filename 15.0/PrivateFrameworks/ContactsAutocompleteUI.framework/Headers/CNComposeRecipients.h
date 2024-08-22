// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOMPOSERECIPIENTS_H
#define CNCOMPOSERECIPIENTS_H

@class NSString, NSArray;
@protocol NSItemProviderReading;

#import <Foundation/Foundation.h>


@interface CNComposeRecipients : NSObject <NSItemProviderReading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly) Class superclass;


+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(id)initWithRecipients:(id)arg0 ;


@end


#endif