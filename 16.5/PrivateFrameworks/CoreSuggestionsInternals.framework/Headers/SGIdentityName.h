// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGIDENTITYNAME_H
#define SGIDENTITYNAME_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGIdentityName : NSObject {
    NSString *_privFullName;
}


@property (readonly, nonatomic) NSString *firstname; // ivar: _firstname
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *middlename; // ivar: _middlename
@property (readonly, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) NSString *suffix; // ivar: _suffix
@property (readonly, nonatomic) NSString *surname; // ivar: _surname


+(id)nameWithString:(id)arg0 ;
+(id)patterns;
-(id)initWithChineseName:(id)arg0 ;
-(id)initWithJapaneseName:(id)arg0 ;
-(id)initWithKoreanName:(id)arg0 ;
-(id)initWithSpanishName:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithVietnameseName:(id)arg0 ;
-(id)initWithWesternName:(id)arg0 ;
-(id)segmentWesternNameWithNameParts:(id)arg0 andPrefix:(id)arg1 ;
-(id)toSGNameWithOrigin:(id)arg0 recordId:(id)arg1 extractionInfo:(id)arg2 ;


@end


#endif