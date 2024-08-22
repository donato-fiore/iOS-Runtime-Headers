// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLFILETYPEMAPPINGS_H
#define NSURLFILETYPEMAPPINGS_H


#import <Foundation/Foundation.h>

#import "NSURLFileTypeMappingsInternal.h"

@interface NSURLFileTypeMappings : NSObject {
    NSURLFileTypeMappingsInternal *_internal;
}




+(id)sharedMappings;
-(id)MIMETypeForExtension:(id)arg0 ;
-(id)_UTIMIMETypeForExtension:(id)arg0 ;
-(id)_UTIextensionForMIMEType:(id)arg0 ;
-(id)_init;
-(id)extensionsForMIMEType:(id)arg0 ;
-(id)preferredExtensionForMIMEType:(id)arg0 ;


@end


#endif