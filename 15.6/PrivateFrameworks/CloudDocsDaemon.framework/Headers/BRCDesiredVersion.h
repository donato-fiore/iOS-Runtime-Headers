// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDESIREDVERSION_H
#define BRCDESIREDVERSION_H

@class NSString, NSError;
@protocol PQLValuable;


#import "BRCVersion.h"

@interface BRCDesiredVersion : BRCVersion <PQLValuable>

 {
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFault;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) NSString *serverName; // ivar: _serverName
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) BOOL wantsContent;
@property (readonly, nonatomic) BOOL wantsContentForThumbnail;
@property (readonly, nonatomic) BOOL wantsThumbnail;


+(BOOL)supportsSecureCoding;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
-(BOOL)isStillValidForEtag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDesiredVersion:(id)arg0 ;
-(id)initWithServerVersion:(id)arg0 serverName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markLiveAsFault;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif