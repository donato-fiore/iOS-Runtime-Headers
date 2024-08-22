// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHFORSPORTSINTENT_H
#define SEARCHFORSPORTSINTENT_H

@class INIntent, NSString;



@interface SearchForSportsIntent : INIntent

@property (nonatomic, copy) NSString *athleteName;
@property (nonatomic, copy) NSString *athleteQId;
@property (nonatomic, copy) NSString *leagueName;
@property (nonatomic, copy) NSString *leagueQId;
@property (nonatomic, copy) NSString *sportName;
@property (nonatomic, copy) NSString *sportQId;
@property (nonatomic, copy) NSString *teamName;
@property (nonatomic, copy) NSString *teamQId;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif