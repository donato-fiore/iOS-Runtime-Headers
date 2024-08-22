// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONREMOTECOMPLICATION_H
#define NTKCOMPANIONREMOTECOMPLICATION_H



#import "NTKRemoteComplication.h"
#import "NTKCompanion3rdPartyApp.h"

@interface NTKCompanionRemoteComplication : NTKRemoteComplication

@property (retain, nonatomic) NTKCompanion3rdPartyApp *app; // ivar: _app


+(id)complicationWithApp:(id)arg0 ;
-(id)localizedDetailText;
-(id)ntk_sectionIdentifier;


@end


#endif