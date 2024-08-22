// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTVIEWREQUEST_H
#define GKTOURNAMENTVIEWREQUEST_H

@class UIColor, GKTournament, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKTournamentViewRequest : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger appearanceStyle; // ivar: _appearanceStyle
@property (nonatomic) NSInteger playerGroup; // ivar: _playerGroup
@property (retain, nonatomic) UIColor *secondaryTintColor; // ivar: _secondaryTintColor
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) GKTournament *tournament; // ivar: _tournament
@property (retain, nonatomic) NSString *tournamentDefinitionID; // ivar: _tournamentDefinitionID
@property (nonatomic) NSInteger viewType; // ivar: _viewType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewType:(NSInteger)arg0 tournamentDefinitionID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif