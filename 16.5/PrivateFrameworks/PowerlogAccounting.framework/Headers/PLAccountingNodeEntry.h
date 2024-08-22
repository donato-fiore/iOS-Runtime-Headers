// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGNODEENTRY_H
#define PLACCOUNTINGNODEENTRY_H

@class PLEntry, NSString;



@interface PLAccountingNodeEntry : PLEntry

@property (readonly, nonatomic) NSString *name;


+(id)entryKey;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initEntryWithRawData:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithRootNodeID:(id)arg0 ;


@end


#endif