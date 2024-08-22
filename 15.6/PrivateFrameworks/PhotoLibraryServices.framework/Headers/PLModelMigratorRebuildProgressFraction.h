// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELMIGRATORREBUILDPROGRESSFRACTION_H
#define PLMODELMIGRATORREBUILDPROGRESSFRACTION_H


#import <Foundation/Foundation.h>


@interface PLModelMigratorRebuildProgressFraction : NSObject {
    BOOL _legacyRecoveryEnabled;
}


@property (readonly) BOOL isLegacyRecoveryEnabled;
@property (nonatomic, getter=isRebuildEnabled) BOOL rebuildEnabled; // ivar: _rebuildEnabled


-(float)progressFractionForType:(unsigned char)arg0 ;
-(id)initWithLegacyRecoveryEnabled:(BOOL)arg0 ;


@end


#endif