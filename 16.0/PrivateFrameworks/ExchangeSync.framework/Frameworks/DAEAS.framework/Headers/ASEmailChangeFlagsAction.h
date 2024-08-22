// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASEMAILCHANGEFLAGSACTION_H
#define ASEMAILCHANGEFLAGSACTION_H

@class DAAction;



@interface ASEmailChangeFlagsAction : DAAction

@property (nonatomic) NSUInteger changedFlags; // ivar: _changedFlags
@property (nonatomic) BOOL flagged; // ivar: _flagged
@property (nonatomic) BOOL read; // ivar: _read


-(id)initWithServerID:(id)arg0 read:(BOOL)arg1 flagged:(BOOL)arg2 changedFlags:(NSUInteger)arg3 ;
-(void)appendApplicationDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;


@end


#endif