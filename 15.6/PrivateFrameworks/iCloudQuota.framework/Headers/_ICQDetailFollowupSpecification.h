// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICQDETAILFOLLOWUPSPECIFICATION_H
#define _ICQDETAILFOLLOWUPSPECIFICATION_H

@class ICQFollowupSpecification, NSString, NSDictionary;



@interface _ICQDetailFollowupSpecification : ICQFollowupSpecification

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSDictionary *followUpInfo; // ivar: _followUpInfo
@property (retain, nonatomic) NSDictionary *followupMesgTemplates; // ivar: _followupMesgTemplates
@property (retain, nonatomic) NSDictionary *followupTitleTemplates; // ivar: _followupTitleTemplates
@property (retain, nonatomic) NSDictionary *lockScreenInfo; // ivar: _lockScreenInfo
@property (retain, nonatomic) NSDictionary *mesgTemplates; // ivar: _mesgTemplates
@property (retain, nonatomic) NSDictionary *subTitleTemplates; // ivar: _subTitleTemplates
@property (retain, nonatomic) NSDictionary *titleTemplates; // ivar: _titleTemplates


+(id)replaceWordsIn:(id)arg0 with:(id)arg1 ;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)mesgWithKey:(id)arg0 ;
-(id)subTitleWithKey:(id)arg0 ;
-(id)titleWithKey:(id)arg0 ;
-(void)postFollowupWithController:(id)arg0 completion:(id)arg1 ;


@end


#endif