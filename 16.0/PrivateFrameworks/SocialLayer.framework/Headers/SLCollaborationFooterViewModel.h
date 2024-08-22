// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLCOLLABORATIONFOOTERVIEWMODEL_H
#define SLCOLLABORATIONFOOTERVIEWMODEL_H

@class CKContainerSetupInfo, NSURL, _SWCollaborationMetadata, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLCollaborationFooterViewModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL isShareLink; // ivar: _isShareLink
@property (readonly, nonatomic) _SWCollaborationMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *optionsSummary; // ivar: _optionsSummary
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerSetupInfo:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif