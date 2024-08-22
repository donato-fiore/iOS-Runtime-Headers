// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPLISTBUNDLE_H
#define NTKPLISTBUNDLE_H

@class NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface NTKPlistBundle : NSObject

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) NSString *plistFileName; // ivar: _plistFileName


-(id)description;
-(id)initWithPlist:(id)arg0 bundle:(id)arg1 ;


@end


#endif