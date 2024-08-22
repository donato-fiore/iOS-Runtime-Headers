// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTMTLDROPHINTS_H
#define PTMTLDROPHINTS_H

@class NSString;
@protocol MTLResourceGroupSPI;

#import <Foundation/Foundation.h>


@interface PTMTLDropHints : NSObject {
    id<MTLResourceGroupSPI> *_resourceGroup;
    NSString *_name;
    int _count;
}


@property BOOL enabled; // ivar: _enabled


-(id)initWithDevice:(id)arg0 resources:(id)arg1 name:(id)arg2 ;
-(void)dropHintsFor:(id)arg0 ;
-(void)setDropHintsFor:(id)arg0 ;


@end


#endif