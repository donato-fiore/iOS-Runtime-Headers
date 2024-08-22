// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTSHARINGTRANSFORMER_H
#define SGCONTACTSHARINGTRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol>

 {
    ? _rng;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *language; // ivar: _language
@property (readonly) Class superclass;
@property NSInteger windowLength; // ivar: _windowLength


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactSharingTransformer:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 windowLength:(NSInteger)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif