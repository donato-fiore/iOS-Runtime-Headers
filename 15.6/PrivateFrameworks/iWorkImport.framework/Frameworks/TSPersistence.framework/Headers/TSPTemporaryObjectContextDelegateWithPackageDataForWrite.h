// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPTEMPORARYOBJECTCONTEXTDELEGATEWITHPACKAGEDATAFORWRITE_H
#define TSPTEMPORARYOBJECTCONTEXTDELEGATEWITHPACKAGEDATAFORWRITE_H

@class NSDictionary;


#import "TSPTemporaryObjectContextDelegate.h"

@interface TSPTemporaryObjectContextDelegateWithPackageDataForWrite : TSPTemporaryObjectContextDelegate {
    NSDictionary *_packageDataForWrite;
    NSDictionary *_additionalDocumentPropertiesForWrite;
}




-(id)additionalDocumentPropertiesForWrite;
-(id)initWithPackageDataForWrite:(id)arg0 additionalDocumentPropertiesForWrite:(id)arg1 ;
-(id)packageDataForWrite;


@end


#endif