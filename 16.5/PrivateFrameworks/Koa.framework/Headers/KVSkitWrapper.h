// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSKITWRAPPER_H
#define KVSKITWRAPPER_H


#import <Foundation/Foundation.h>


@interface KVSkitWrapper : NSObject {
    path _skitDirectoryPath;
    path _nameTriePath;
    path _aliasTriePath;
}


@property (readonly, nonatomic) shared_ptr<skitbridge::Searcher> searcher; // ivar: _searcher


-(id)initWithSkitDirectoryURL:(id)arg0 ;
-(void)boostrap;
-(void)teardown;


@end


#endif