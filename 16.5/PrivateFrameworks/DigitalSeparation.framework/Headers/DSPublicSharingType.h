// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPUBLICSHARINGTYPE_H
#define DSPUBLICSHARINGTYPE_H

@class NSArray, NSString, NSMutableSet;
@protocol DSSource;

#import <Foundation/Foundation.h>


@interface DSPublicSharingType : NSObject

@property (readonly, copy, nonatomic) NSArray *allPublicResources;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *localizedDetailText;
@property (retain, nonatomic) NSMutableSet *publicResources; // ivar: _publicResources
@property (readonly, nonatomic) NSInteger score;
@property (retain, nonatomic) NSObject<DSSource> *source; // ivar: _source


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSource:(id)arg0 ;
-(void)addPublicResource:(id)arg0 ;
-(void)removePublicResource:(id)arg0 ;
-(void)stopAllSharingOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)stopSharingResource:(id)arg0 onQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif