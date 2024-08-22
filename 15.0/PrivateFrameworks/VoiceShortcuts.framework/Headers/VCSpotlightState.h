// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSPOTLIGHTSTATE_H
#define VCSPOTLIGHTSTATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCSpotlightState : NSObject

@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *syncedShortcuts; // ivar: _syncedShortcuts


-(BOOL)isConsistentWithClientState:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 syncedShortcuts:(id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)saveToPath:(id)arg0 ;


@end


#endif