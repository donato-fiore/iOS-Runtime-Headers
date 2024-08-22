// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXSCHEMA_H
#define CKXSCHEMA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKXSchema : NSObject <NSCopying>

 {
    vector<unsigned long long, std::allocator<unsigned long long>> structTokens;
    vector<CKXStructProperties, std::allocator<CKXStructProperties>> structTokenToStructProperties;
    vector<std::vector<unsigned long long>, std::allocator<std::vector<unsigned long long>>> structTokenToFieldTokens;
    vector<CKXFieldProperties, std::allocator<CKXFieldProperties>> fieldTokenToFieldProperties;
}


@property (nonatomic) NSUInteger nextIdentifier; // ivar: _nextIdentifier


-(NSInteger)newIdentifier;
-(NSUInteger)defineFieldForStruct:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif