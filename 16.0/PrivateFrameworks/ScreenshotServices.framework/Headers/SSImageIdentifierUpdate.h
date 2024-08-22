// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSIMAGEIDENTIFIERUPDATE_H
#define SSIMAGEIDENTIFIERUPDATE_H

@class BSSettings, NSString;
@protocol BSXPCSecureCoding, SSLoggable;

#import <Foundation/Foundation.h>


@interface SSImageIdentifierUpdate : NSObject <BSXPCSecureCoding, SSLoggable>



@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *environmentDescriptionIdentifier; // ivar: _environmentDescriptionIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (readonly, nonatomic) NSString *loggableDescription;
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif