// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCBOUNCINGREPORT_H
#define BRCBOUNCINGREPORT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCBouncingReport : NSObject <NSSecureCoding>



@property unsigned int BouncingCountFromAlsToDir; // ivar: BouncingCountFromAlsToDir
@property unsigned int BouncingCountFromAlsToDoc; // ivar: BouncingCountFromAlsToDoc
@property unsigned int BouncingCountFromAlsToLnk; // ivar: BouncingCountFromAlsToLnk
@property unsigned int BouncingCountFromAlsToPkg; // ivar: BouncingCountFromAlsToPkg
@property unsigned int BouncingCountFromDirToAls; // ivar: BouncingCountFromDirToAls
@property unsigned int BouncingCountFromDirToDoc; // ivar: BouncingCountFromDirToDoc
@property unsigned int BouncingCountFromDirToLnk; // ivar: BouncingCountFromDirToLnk
@property unsigned int BouncingCountFromDirToPkg; // ivar: BouncingCountFromDirToPkg
@property unsigned int BouncingCountFromDocToAls; // ivar: BouncingCountFromDocToAls
@property unsigned int BouncingCountFromDocToDir; // ivar: BouncingCountFromDocToDir
@property unsigned int BouncingCountFromDocToLnk; // ivar: BouncingCountFromDocToLnk
@property unsigned int BouncingCountFromDocToPkg; // ivar: BouncingCountFromDocToPkg
@property unsigned int BouncingCountFromLnkToAls; // ivar: BouncingCountFromLnkToAls
@property unsigned int BouncingCountFromLnkToDir; // ivar: BouncingCountFromLnkToDir
@property unsigned int BouncingCountFromLnkToDoc; // ivar: BouncingCountFromLnkToDoc
@property unsigned int BouncingCountFromLnkToPkg; // ivar: BouncingCountFromLnkToPkg
@property unsigned int BouncingCountFromPkgToAls; // ivar: BouncingCountFromPkgToAls
@property unsigned int BouncingCountFromPkgToDir; // ivar: BouncingCountFromPkgToDir
@property unsigned int BouncingCountFromPkgToDoc; // ivar: BouncingCountFromPkgToDoc
@property unsigned int BouncingCountFromPkgToLnk; // ivar: BouncingCountFromPkgToLnk
@property unsigned int BouncingCountOnSameType; // ivar: BouncingCountOnSameType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif