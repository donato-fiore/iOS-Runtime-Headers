// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPHOMEKITSESSIONEXPORTEDOBJECT_H
#define VCPHOMEKITSESSIONEXPORTEDOBJECT_H

@protocol VCPHomeKitAnalysisSessionClientProtocol;

#import <Foundation/Foundation.h>

#import "VCPHomeKitAnalysisSession.h"

@interface VCPHomeKitSessionExportedObject : NSObject <VCPHomeKitAnalysisSessionClientProtocol>



@property (weak, nonatomic) VCPHomeKitAnalysisSession *weakSession; // ivar: _weakSession


-(void)processResults:(id)arg0 withReply:(id)arg1 ;


@end


#endif