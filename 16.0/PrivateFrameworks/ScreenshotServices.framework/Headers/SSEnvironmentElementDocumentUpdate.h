// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSENVIRONMENTELEMENTDOCUMENTUPDATE_H
#define SSENVIRONMENTELEMENTDOCUMENTUPDATE_H

@class BSSettings, NSString;
@protocol BSXPCSecureCoding, SSLoggable;

#import <Foundation/Foundation.h>

#import "SSHarvestedApplicationDocument.h"

@interface SSEnvironmentElementDocumentUpdate : NSObject <BSXPCSecureCoding, SSLoggable>



@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SSHarvestedApplicationDocument *document; // ivar: _document
@property (copy, nonatomic) NSString *environmentElementIdentifier; // ivar: _environmentElementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif