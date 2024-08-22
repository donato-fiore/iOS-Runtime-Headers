// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCPLAYBACKPOSITIONDOMAIN_H
#define SBCPLAYBACKPOSITIONDOMAIN_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSString *foreignDatabasePath; // ivar: _foreignDatabasePath
@property (nonatomic) BOOL supportsSyncProtocol; // ivar: _supportsSyncProtocol
@property (retain, nonatomic) NSString *ubiquitousDatabasePath; // ivar: _ubiquitousDatabasePath


+(BOOL)supportsSecureCoding;
+(id)domainForExtrasValues;
+(id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomainIdentifier:(id)arg0 foreignDatabasePath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif