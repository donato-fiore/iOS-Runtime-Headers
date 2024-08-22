// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTASSETNAMEDESCRIPTION_H
#define PHIMPORTASSETNAMEDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}




-(id)description;
-(id)initWithFileName:(id)arg0 uuid:(id)arg1 ;
-(id)redactedDescription;


@end


#endif