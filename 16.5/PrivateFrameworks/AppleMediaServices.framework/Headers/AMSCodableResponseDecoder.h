// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCODABLERESPONSEDECODER_H
#define AMSCODABLERESPONSEDECODER_H

@protocol AMSResponseDecoding;

#import <Foundation/Foundation.h>


@interface AMSCodableResponseDecoder : NSObject <AMSResponseDecoding>

 {
    ? rootClass;
}




-(id)init;
-(id)initWithRootClass:(Class)arg0 ;
-(id)resultFromResult:(id)arg0 error:(*id)arg1 ;


@end


#endif