// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPACKAGECHECKSUMMER_H
#define BRCPACKAGECHECKSUMMER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "BRCChecksummingOutputStream.h"

@interface BRCPackageChecksummer : NSObject {
    BRCChecksummingOutputStream *_stream;
}


@property (readonly, nonatomic) NSData *signature;


-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)done;


@end


#endif