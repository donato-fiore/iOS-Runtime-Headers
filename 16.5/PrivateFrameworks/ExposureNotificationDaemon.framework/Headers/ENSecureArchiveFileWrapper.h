// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENSECUREARCHIVEFILEWRAPPER_H
#define ENSECUREARCHIVEFILEWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENSecureArchiveFileWrapper : NSObject {
    int _fileDescriptor;
}


@property (readonly, copy, nonatomic) NSString *path; // ivar: _path


-(BOOL)_writeObject:(id)arg0 toFileDescriptor:(int)arg1 error:(*id)arg2 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)readObject:(*id)arg0 ofClass:(Class)arg1 error:(*id)arg2 ;
-(BOOL)readObject:(*id)arg0 ofClasses:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)close;


@end


#endif