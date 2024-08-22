// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETCONTROLSTATISTICSBYCOMMAND_H
#define MAAUTOASSETCONTROLSTATISTICSBYCOMMAND_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetControlStatisticsByCommand : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger checkForNewer; // ivar: _checkForNewer
@property (nonatomic) NSInteger continueLockUsage; // ivar: _continueLockUsage
@property (nonatomic) NSInteger currentStatus; // ivar: _currentStatus
@property (nonatomic) NSInteger determineIfAvailable; // ivar: _determineIfAvailable
@property (nonatomic) NSInteger eliminateAllForAssetType; // ivar: _eliminateAllForAssetType
@property (nonatomic) NSInteger eliminateAllForSelector; // ivar: _eliminateAllForSelector
@property (nonatomic) NSInteger eliminatePromotedNeverLockedForSelector; // ivar: _eliminatePromotedNeverLockedForSelector
@property (nonatomic) NSInteger endAllPreviousLocks; // ivar: _endAllPreviousLocks
@property (nonatomic) NSInteger endLockUsage; // ivar: _endLockUsage
@property (nonatomic) NSInteger endPreviousLocks; // ivar: _endPreviousLocks
@property (nonatomic) NSInteger interestInContent; // ivar: _interestInContent
@property (nonatomic) NSInteger lockContent; // ivar: _lockContent
@property (nonatomic) NSInteger stageDetermineAllAvailable; // ivar: _stageDetermineAllAvailable
@property (nonatomic) NSInteger stageDownloadAll; // ivar: _stageDownloadAll
@property (nonatomic) NSInteger stagePurgeAll; // ivar: _stagePurgeAll


+(BOOL)supportsSecureCoding;
-(NSInteger)total;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialValue:(NSInteger)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementForClientRequestMessage:(id)arg0 ;


@end


#endif