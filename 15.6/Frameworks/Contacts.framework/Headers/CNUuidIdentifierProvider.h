// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUUIDIDENTIFIERPROVIDER_H
#define CNUUIDIDENTIFIERPROVIDER_H

@class NSString;
@protocol CNIdentifierProvider;

#import <Foundation/Foundation.h>


@interface CNUuidIdentifierProvider : NSObject <CNIdentifierProvider>

 {
    NSString *_suffix;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSuffix:(id)arg0 ;
-(id)makeIdentifier;


@end


#endif