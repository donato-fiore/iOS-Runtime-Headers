// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSTRUCTUREDDATAOPACKWRITER_H
#define HMDSTRUCTUREDDATAOPACKWRITER_H

@class NSMutableData;


#import "HMDStructuredDataFoundationWriter.h"

@interface HMDStructuredDataOPACKWriter : HMDStructuredDataFoundationWriter {
    NSMutableData *_output;
}




-(void)emitRootValue:(id)arg0 ;


@end


#endif