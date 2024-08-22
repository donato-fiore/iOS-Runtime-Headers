// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREERRORATTRIBUTES_H
#define SUCOREERRORATTRIBUTES_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SUCoreErrorAttributes : NSObject

@property (readonly, nonatomic) NSInteger code; // ivar: _code
@property (readonly, retain, nonatomic) NSString *codeName; // ivar: _codeName
@property (readonly, retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSInteger indications; // ivar: _indications
@property (retain, nonatomic) NSString *keyMatchTrue; // ivar: _keyMatchTrue
@property (retain, nonatomic) NSDictionary *keyMatchTrueMap; // ivar: _keyMatchTrueMap


+(id)descriptionForIndication:(NSInteger)arg0 ;
+(id)nameForIndication:(NSInteger)arg0 ;
-(id)description;
-(id)initForDomain:(id)arg0 withCode:(NSInteger)arg1 ofCodeName:(id)arg2 indicating:(NSInteger)arg3 ifKeyTrue:(id)arg4 keyMatchTrueMap:(id)arg5 ;


@end


#endif