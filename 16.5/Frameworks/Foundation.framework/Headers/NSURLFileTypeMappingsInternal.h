// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLFILETYPEMAPPINGSINTERNAL_H
#define NSURLFILETYPEMAPPINGSINTERNAL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NSURLFileTypeMappingsInternal : NSObject {
    NSDictionary *MIMETypeToExtensionList;
    NSDictionary *extensionToMIMEType;
}




-(id)init;


@end


#endif