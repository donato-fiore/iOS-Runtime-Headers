// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPTINDEXKEYPATH_H
#define HKCONCEPTINDEXKEYPATH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKConceptIndexKeyPath : NSObject

@property (readonly, copy, nonatomic) NSString *fullKeyPath; // ivar: _fullKeyPath
@property (readonly, nonatomic) _NSRange range; // ivar: _range


+(id)conceptIndexKeyPathWithFullKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)head;
-(id)init;
-(id)initWithFullKeyPath:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)tail;


@end


#endif