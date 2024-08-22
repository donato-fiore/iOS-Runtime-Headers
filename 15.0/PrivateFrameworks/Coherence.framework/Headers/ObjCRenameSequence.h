// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBJCRENAMESEQUENCE_H
#define OBJCRENAMESEQUENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ObjCRenameSequence : NSObject {
    ? renameSequence;
    ? renameAddedBySequence;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isEmpty;


-(id)init;
-(void)addAddedByReplica:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addAddedByVersion:(id)arg0 ;
-(void)addWithReplica:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif