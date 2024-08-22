// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTOKENKEYCHAINCONTENTS_H
#define TKTOKENKEYCHAINCONTENTS_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TKTokenConfiguration.h"

@interface TKTokenKeychainContents : NSObject {
    NSArray *_items;
}


@property (readonly, copy) NSDictionary *certificates;
@property (readonly) TKTokenConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSDictionary *keys;
@property (readonly) NSString *tokenID; // ivar: _tokenID


-(id)certificateForKey:(id)arg0 ;
-(id)certificateForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithTokenID:(id)arg0 ;
-(id)keyForObjectID:(id)arg0 error:(*id)arg1 ;
-(void)fillWithItems:(id)arg0 ;


@end


#endif