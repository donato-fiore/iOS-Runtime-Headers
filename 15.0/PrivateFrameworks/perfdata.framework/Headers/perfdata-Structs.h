typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct running_mean {
    CGFloat field0;
    CGFloat field1;
    NSUInteger field2;
} running_mean;

typedef struct sum {
    CGFloat field0;
    CGFloat field1;
} sum;

typedef struct pooled_mean {
    sum field0;
    sum field1;
    NSUInteger field2;
    NSUInteger field3;
} pooled_mean;

