// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXUNINSTALLOPTIONS_H
#define IXUNINSTALLOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL requestUserConfirmation; // ivar: _requestUserConfirmation
@property (nonatomic) BOOL showArchiveOption; // ivar: _showArchiveOption
@property (nonatomic) BOOL systemAppNotAllowed; // ivar: _systemAppNotAllowed
@property (nonatomic) BOOL waitForDeletion; // ivar: _waitForDeletion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif