// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYLOGARCHIVERDELEGATE_H
#define TITYPOLOGYLOGARCHIVERDELEGATE_H

@class NSString, NSMutableSet;
@protocol NSKeyedArchiverDelegate;

#import <Foundation/Foundation.h>


@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *objects; // ivar: _objects
@property (readonly) Class superclass;


-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(id)init;


@end


#endif