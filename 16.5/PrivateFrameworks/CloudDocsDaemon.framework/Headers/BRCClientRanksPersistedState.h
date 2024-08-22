// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCCLIENTRANKSPERSISTEDSTATE_H
#define BRCCLIENTRANKSPERSISTEDSTATE_H



#import "BRCPersistedState.h"

@interface BRCClientRanksPersistedState : BRCPersistedState {
    NSUInteger _nextItemRowID;
    NSUInteger _nextNotifRank;
    NSUInteger _nextPackageItemRank;
    NSUInteger _telemetryMinRowID;
    NSInteger _telemetryToken;
}


@property (readonly, nonatomic) NSUInteger nextItemRowID;
@property (nonatomic) NSUInteger nextNotifRank;
@property (nonatomic) NSUInteger nextPackageItemRank;
@property (nonatomic) NSUInteger telemetryMinRowID;
@property (nonatomic) NSInteger telemetryToken;


+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(NSUInteger)allocateItemRowID;
-(NSUInteger)allocateNotifRank;
-(NSUInteger)allocatePackageItemRank;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif