// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILEPATHDESCRIPTION_H
#define PLFILEPATHDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLFilePathDescription : NSObject {
    NSString *_path;
}




+(id)descriptionWithFileURL:(id)arg0 ;
+(id)descriptionWithPath:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)redactedDescription;


@end


#endif