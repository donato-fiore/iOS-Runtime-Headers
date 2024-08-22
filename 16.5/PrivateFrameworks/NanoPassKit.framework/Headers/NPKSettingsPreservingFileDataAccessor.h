// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKSETTINGSPRESERVINGFILEDATAACCESSOR_H
#define NPKSETTINGSPRESERVINGFILEDATAACCESSOR_H

@class PKFileDataAccessor, NSString;


#import "NPKCompanionAgentConnection.h"

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor

@property (retain, nonatomic) NPKCompanionAgentConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSString *objectUniqueID; // ivar: _objectUniqueID


-(void)updateSettings:(NSUInteger)arg0 ;


@end


#endif