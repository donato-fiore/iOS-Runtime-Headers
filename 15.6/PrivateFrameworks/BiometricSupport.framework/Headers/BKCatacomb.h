// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKCATACOMB_H
#define BKCATACOMB_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}


@property (readonly, copy, nonatomic) NSString *catacombDir; // ivar: _catacombDir


+(id)catacombWithDir:(id)arg0 ;
-(id)catacombCommitDir;
-(id)catacombPrepareDir;
-(id)content;
-(id)init;
-(int)commitWrite;
-(int)deleteAll;
-(int)deleteFile:(id)arg0 ;
-(int)readData:(*id)arg0 fromFile:(id)arg1 ;
-(int)recover;
-(int)syncDir:(id)arg0 ;
-(int)writeData:(id)arg0 toFile:(id)arg1 ;


@end


#endif