// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GSCLIENTMANAGEDLIBRARY_H
#define GSCLIENTMANAGEDLIBRARY_H

@class NSString;
@protocol GSLibraryProtocol, GSAdditionStoring;

#import <Foundation/Foundation.h>

#import "GSTemporaryStorage.h"

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>

 {
    GSTemporaryStorage *_ts;
}


@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) NSObject<GSAdditionStoring> *storage;


-(BOOL)generationsRemove:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif