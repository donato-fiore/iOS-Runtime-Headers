// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIATTACHMENTSIZEHISTOGRAM_H
#define SGMIATTACHMENTSIZEHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface SGMIAttachmentSizeHistogram : NSObject

@property (readonly, nonatomic) NSUInteger count128KBTo512KB; // ivar: _count128KBTo512KB
@property (readonly, nonatomic) NSUInteger count32KBTo128KB; // ivar: _count32KBTo128KB
@property (readonly, nonatomic) NSUInteger count512KBTo2MB; // ivar: _count512KBTo2MB
@property (readonly, nonatomic) NSUInteger count8KBTo32KB; // ivar: _count8KBTo32KB
@property (readonly, nonatomic) NSUInteger countOver2MB; // ivar: _countOver2MB
@property (readonly, nonatomic) NSUInteger countUpTo8KB; // ivar: _countUpTo8KB


-(BOOL)isEmpty;
-(id)description;
-(id)initWithNumberArray:(id)arg0 ;
-(id)numberArray;
-(void)bucketizeWithSize:(NSUInteger)arg0 ;


@end


#endif