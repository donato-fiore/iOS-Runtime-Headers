// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEPISODE_H
#define PKEPISODE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKShow.h"
#import "PKEpisodeStoreId.h"

@interface PKEpisode : NSObject <NSSecureCoding>

 {
    ? title;
    ? releaseDate;
    ? guid;
    ? uuid;
    ? streamUrl;
    ? episodeUuid;
}


@property (nonatomic, readonly) CGFloat duration; // ivar: duration
@property (nonatomic, copy) NSString *episodeUuid;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, readonly) BOOL isExplicit; // ivar: isExplicit
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) PKShow *show; // ivar: show
@property (nonatomic, readonly) PKEpisodeStoreId *storeId; // ivar: storeId
@property (nonatomic, readonly) NSString *streamUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *uuid;


+(BOOL)supportsSecureCoding;
+(NSInteger)mediaTaskType;
+(id)contentFrom:(id)arg0 ;
+(id)itemFrom:(id)arg0 ;
+(void)fetchEpisodeFrom:(id)arg0 completion:(id)arg1 ;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initFrom:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 releaseDate:(id)arg1 isExplicit:(BOOL)arg2 duration:(CGFloat)arg3 storeId:(id)arg4 show:(id)arg5 guid:(id)arg6 uuid:(id)arg7 streamUrl:(id)arg8 ;
-(id)lookupEpisode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForDatabaseMatch;


@end


#endif