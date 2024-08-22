// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFKEYCHAINFETCHRESULT_H
#define _SFKEYCHAINFETCHRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface _SFKeychainFetchResult : NSObject {
    id *_keychainFetchResultInternal;
}


@property (readonly) NSError *error;
@property (readonly) NSInteger resultType;
@property (readonly) id *value;


+(id)fetchResultWithError:(id)arg0 ;
+(id)fetchResultWithValue:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)fetchValueWithAuthenticationContext:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif